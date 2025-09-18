```mermaid



classDiagram

&nbsp;   class Pokemon {

&nbsp;       +Pokemon()

&nbsp;       +virtual ~Pokemon()

&nbsp;       +virtual void attack() const

&nbsp;   }

&nbsp;   class Pikachu {

&nbsp;       +Pikachu()

&nbsp;       +~Pikachu()

&nbsp;       +void attack() const

&nbsp;   }

&nbsp;   class Squirtle {

        +Squirtle()

        +~Squirtle()

        +void attack() const

    }





&nbsp;   Pokemon <|-- Pikachu

&nbsp;   ```

