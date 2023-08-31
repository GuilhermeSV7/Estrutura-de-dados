# Função Arrow

A função arrow é uma forma simplificada de criar funções em algumas linguagens de programação, como o JavaScript. Ela oferece uma maneira concisa de definir funções sem a necessidade de usar a palavra-chave `function`.

## Características

- **Sem Utilização do `this`:** Funções arrow capturam o valor do `this` do contexto em que foram definidas. Isso evita problemas com escopo e confusões relacionadas ao valor do `this`.

- **Valores Pré-Referenciados:** Os valores utilizados dentro de funções arrow são referenciados diretamente, o que pode simplificar o código ao evitar a necessidade de usar `return`.

## Limitações

Apesar da praticidade das funções arrow, é importante considerar suas limitações:

- **Não Recomendado para Todos os Casos:** Embora sejam úteis para evitar problemas de escopo, as funções arrow não são apropriadas para todas as situações. Em programação orientada a objetos (POO), é fundamental usar o `this` para acessar e manipular propriedades e métodos do objeto atual.

- **Contexto em POO:** Em POO, o uso do `this` é importante para manter o contexto do objeto e interagir com suas características específicas.

Lembre-se de que a escolha entre funções arrow e funções tradicionais depende do contexto e das necessidades específicas do projeto. Em muitos casos, é possível tirar proveito das vantagens das funções arrow sem comprometer os princípios da POO.
