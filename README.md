# Projeto2

Você foi contratado para desenvolver um sistema de gerenciamento de estoque para diferentes categorias de produtos, incluindo alimentos, eletrônicos e itens de limpeza. O sistema deve permitir o cadastro, consulta e manipulação dos itens do estoque, com funcionalidades específicas para cada categoria de produto.

---

## Objetivo

Desenvolver um sistema orientado a objetos que implemente a estrutura descrita no projeto. O sistema deve representar e gerenciar as interações entre produtos e estoque, oferecendo uma interface simples para realizar operações de cadastro, consulta e geração de recibos.

---

## Requisitos

### Classes e Herança:
- **Classe Estoque**:
  - Responsável por gerenciar os produtos cadastrados no sistema.
  - Métodos para adicionar, remover e listar produtos.
- **Classe Produto**:
  - Classe base que representa as propriedades comuns a todos os produtos (ex.: nome, preço, quantidade).
- **Classes Derivadas de Produto**:
  - **Alimento**:
    - Atributos adicionais, como data de validade.
    - Métodos para verificar validade.
  - **Eletronico**:
    - Atributos adicionais, como garantia.
    - Métodos para calcular garantia restante.
  - **Limpeza**:
    - Atributos adicionais, como tipo de produto químico.
    - Métodos para verificar restrições de uso.

### Relacionamentos:
- A classe **Estoque** mantém uma composição com uma lista de produtos.
- As classes **Alimento**, **Eletronico**, e **Limpeza** herdam de **Produto**.

### Funcionalidade:
- **Cadastro de Produtos**:
  - Permite adicionar novos produtos ao estoque com base em sua categoria.
- **Consulta e Listagem**:
  - Permite consultar produtos por categoria ou listar todos os produtos no estoque.
- **Atualização e Remoção**:
  - Atualizar informações de produtos existentes.
  - Remover produtos do estoque.
- **Recibo**:
  - Geração de recibos para operações realizadas no estoque.

---

## Função Main

A função `main` é responsável por orquestrar o funcionamento do sistema:
1. **Inicialização**:
   - Criação do estoque.
   - Cadastro de produtos nas categorias disponíveis.
2. **Execução**:
   - Realizar operações como listar produtos, buscar por categoria e gerar recibos.
   - Simular operações com um menu interativo.
3. **Saída**:
   - Exibir informações detalhadas sobre o estado atual do estoque e as operações realizadas.

---

## Entregáveis

- **Código Fonte**:
  - Todos os arquivos `.cpp` e `.h` que implementam o sistema.
- **Vídeo de Demonstração**:
  - Mostrando o funcionamento completo do sistema, incluindo cadastro, consulta e operações no estoque.
- **Diagrama de Classes**:
  - Um diagrama UML representando as classes do sistema, incluindo seus relacionamentos (herança e composição).

---
