```mermaid

classDiagram
    class Pokemon {
        +Pokemon()
        +virtual ~Pokemon()
        +virtual void attack() const
    }
    class Pikachu {
        +Pikachu()
        +~Pikachu()
        +void attack() const
    }

    Pokemon <|-- Pikachu
    ```