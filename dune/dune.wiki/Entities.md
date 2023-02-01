# DUNE: Entities

## The concept of Entity and IMC addressing

In IMC there is a notion of _Entity_, an abstract submodule of a _System_. Entities are abstract, and can range from being pieces of software (a _Task_, a piece of code within that _Task_), to sensors and actuators (a motor, a pressure sensor).

The IMC addressing scheme comprises two levels, the _System_ level and the _Entity_ level. The _System_ level determines from which system a message comes from, and to which it is destined. A _System_ is generally either a DUNE instance or a CCU instance (Neptus or ACCU). The _Entity_ level, on the other hand, allows for subdivision inside each System.

Every IMC message has two fields that define the _System_ and _Entity_ where it originated, and another two that define its destination. It should be noted that the destination fields are just indicative, as an _Entity_ **may choose** to subscribe and listen to messages that aren't destined to it.

### Labels and Id's

Each _entity_ has a unique name, which in this case is called a _label_. In order to reduce the overhead, each _entity_ also has a unique integer associated with it, which is called the _id_. It is this _id_ that is used in the IMC messages to identify the source and destination entity.

***

## The Entity classes

As stated before, an _Entity_ is an abstract IMC "thing". Still, its behaviors must be implemented somewhere, and that place is generally inside a particular Task. The classes in `DUNE::Entities` are meant to make it easier to implement those behaviors, and its use will be described shortly.

### The BasicEntity class

The class `Entities::BasicEntity` represents the most basic type of _Entity_, and helps implementing its most basic behaviors:
* sending the `IMC::EntityInfo` messages when appropriate.
* replying to the `IMC::QueryEntityInfo` message.
* sending and replying to other IMC messages (with the correct _entity id_).

This class can be extended to support additional entity-related IMC messaging traits.

### The StatefulEntity class

The class `Entities::StatefulEntity` represents entities with _state_, as happens with the `Tasks::Task`'s _main entity_. Besides the basic behaviors, this class also helps implementing the following behaviors:
* sending `IMC::EntityState` messages when appropriate.
* sending `IMC::EntityActivationState` messages when appropriate.
* properly handling `IMC::QueryEntityState` messages.
* properly handling `IMC::QueryEntityActivationState` messages.

### Using the Entity classes

As explained before, the _Entity_ classes are meant to be used by `Tasks::Task` derived classes. They must be properly initialized and deinitialized to work as expected, and it is generally a good idea to let the `Tasks::Task` take care of its lifecycle.

To have a new Entity created, your Task should request it from the parent class, by calling `reserveEntity<>();`. This templated function returns a pointer to the new Entity object, which is what you'll use to interact with the Entity object. **You should never delete this pointer**, because `Tasks::Task` already takes care of that when it is finished.

(to be continued...)
