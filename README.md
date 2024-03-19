# Algoritmo_de_Kruskal
Algoritmo usado em Teoria dos Grafos para encontrar árvore geradora mínima.

1. **Bibliotecas Utilizadas:** O código utiliza as bibliotecas padrão `stdio.h` e `stdlib.h`.

2. **Estruturas de Dados:**
   - `Edge`: É uma estrutura que define uma aresta do grafo, contendo os campos `origin` (origem), `destiny` (destino) e `value` (valor/peso).
   - `Graph`: É uma estrutura que define o grafo, contendo o número de vértices `V`, o número de arestas `E` e um array de arestas `edge`.

3. **Função `createGraph`:** Esta função cria um novo grafo dinamicamente, alocando memória para ele e para seu array de arestas.

4. **Funções `find` e `join`:** Essas funções são utilizadas para a implementação da estrutura de dados Disjoint Set Union (DSU), usada para verificar e unir componentes conectados no grafo.

5. **Função de Comparação `compare`:** Esta função é usada pela função `qsort` para ordenar as arestas do grafo com base em seus pesos.

6. **Função `Kruskal`:** Esta função implementa o algoritmo de Kruskal para encontrar a Árvore Geradora Mínima. Os passos incluem:
   - Ordenar as arestas do grafo em ordem crescente de peso.
   - Inicializar um conjunto de "pais" para cada vértice.
   - Iterar sobre as arestas ordenadas e, para cada aresta, verificar se as suas extremidades pertencem a componentes diferentes. Se pertencerem, a aresta é adicionada à AGM e as componentes são unidas.
   - O processo é repetido até que a AGM contenha `V-1` arestas ou todas as arestas tenham sido examinadas.

7. **Função `main`:**
   - Obtém do usuário o número de vértices (`V`) e o número de arestas (`E`).
   - Cria um novo grafo com base nas entradas do usuário.
   - Solicita ao usuário que insira as informações das arestas (origem, destino e peso).
   - Chama a função `Kruskal` para encontrar e imprimir a Árvore Geradora Mínima do grafo.

8. **Entrada e Saída:**
   - O programa solicita ao usuário o número de vértices e arestas, bem como as informações das arestas.
   - Em seguida, imprime a Árvore Geradora Mínima encontrada, mostrando a origem, destino e peso de cada aresta.

Este algoritmo de Kruskal é eficiente para encontrar a Árvore Geradora Mínima em grafos ponderados não direcionados. Ele possui uma complexidade de tempo de O(E log E), onde E é o número de arestas no grafo.
