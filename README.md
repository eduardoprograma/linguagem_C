# Aprendendo Linguagem C

[![bit-community.png](https://i.postimg.cc/sDGGYNpx/c2-360x240.png)](https://postimg.cc/nCZLZTSf)

___*Desenvolvimento*___ e ___*Aprendizagem*___ em ___*Linguagem de Programação C*___

Repositório responsável por arquivar o conhecimento adquirido durante a aporendizagem.

## Como pretendo aprender?! 📙

Durante essa escalada em busca do conhecimento desta linguagem utilizarei o Livro ___*C - Como programar*__ de Paul Deitel!

Roteiro e lista de Tarefas:

**1. Introdução a LInguagem C**

- [ ] Programa C Simples: Imprimindo uma linha de Texto.
- [ ] Programa C Simples: Somando dois inteiros
- [ ] Aritmética em C.
- [ ] Tomada de decisões: Operadores Relacionais e de Igualdade.

**2. Desenvolvimento estruturado de programas em C**
- [ ] Algoritmos, Pseudocódigo.
- [ ] Estruturas de controle:
   * A estrutura de seleção if.
   * A estrutura de seleção if…else.
   * A estrutura de repetição while.
- [ ] Formulando algoritmos: 
   * Estudo de caso 1 (repetição controlada por contador).
- [ ] Formulando algoritmos com refinamentos sucessivos top-down:
   * Estudo de caso 2 (repetição controlada por sentinela).
- [ ] Formulando algoritmos com refinamentos sucessivos top-down:
   * Estudo de caso 3 (estruturas de controle aninhadas).
- [ ] Operadores de atribuição.
- [ ] Operadores de incremento e decremento.

**3. Controle de programa em C**
- [ ] Repetição controlada por contador.
- [ ] A estrutura de repetição for.
- [ ] A estrutura de seleção múltipla switch.
- [ ] A estrutura de repetição do…while.
   * Os comandos break e continue.

**4.Funções em C**
- [ ] Módulos de programa em C.
- [ ] Funções da biblioteca matemática.
- [ ] Funções.
   * Definições de funções.
   * Protótipos de funções.
   * Pilha de chamada de funções e registros de ativação.
   * Cabeçalhos.
   * Chamando funções por valor e por referência.
- [ ] Geração de números aleatórios.
- [ ] Classes de armazenamento.
- [ ] Regras de escopo.
- [ ] Recursão.
- [ ] Recursão versus iteração.

**5.Arrays (Matriz) em C**
- [ ] Arrays.
   * Declarando arrays.
   * Exemplos de arrays.
   * Passando arrays para funções.
   * Ordenando arrays.
   * Pesquisando arrays.
   * Arrays multidimensionais.
   
**6.Ponteiros em C**
- [ ] Declarações e inicialização de variáveis-ponteiro.
- [ ] Operadores de ponteiros.
- [ ] Passando argumentos para funções por referência.
- [ ] Usando o qualificador const com ponteiros.
- [ ] Bubble sort usando chamada por referência.
- [ ] Operador sizeof.
- [ ] Expressões com ponteiros e aritmética de ponteiros.
- [ ] A relação entre ponteiros e arrays.
- [ ] Arrays de ponteiros.
   * Estudo de caso: uma simulação de embaralhamento e distribuição de cartas.
- [ ] Ponteiros para funções.

## Recursos Utilizados 🚀

* **[Visual Studio Code](https://code.visualstudio.com/?WT.mc_id=meanserverlessworkshop-github-gllemos)**

## Daqui por diante continuar editando ⭐️

Editar

## Pré-requisitos 📌

Editar

## Executando a Aplicação Localmente ❗️

### Executando a aplicação no lado do Front-End

1) Instalar os pacotes com o comando: (dentro da pasta `front`)

``` 
> Editar
```

2) Depois executar o seguinte comando para executar a aplicação (dentro da pasta `front`):

```
> Editar
```

### Editar

Antes de iniciar os passos abaixo é muito importante que você execute nesse momento o MongoDb localmente!

1) Instalar os pacotes com o comando: (dentro da pasta `api`)

``` 
> npm install
```

2) Depois executar o seguinte comando para executar a aplicação (dentro da pasta `api`):

```
> nodemon
```

Depois bastam abrir o postamn em **localhost:8000** e testar as requisições

E vòilá! :heart: :heart:

## Consumindo as API's no Azure Functions(Mongo x CosmosDb) ⚡️

Visando facilitar o desenvolvimento e agilidade do projeto, já criei duas API que consomem esse projeto no Front-End. Para isso, seguem os links das apis:

### API via MongoDb - Azure Functions

Essa API persiste localmente no MongoDb via Azure Functions.

Para executar, bastam seguir os seguintes passos:

1. Baixar o projeto abaixo:

- **[CRUD Serverless MongoDb](https://github.com/glaucia86/crud-serverless-mongodb)**

2. Instalar as dependências necessárias com o comando:

```bash
> npm i
```

3. Criar um arquivo chamado: `local.settings.json` e incluir o bloco de código abaixo:

```json
{
  "IsEncrypted": false,
  "Values": {
    "FUNCTIONS_WORKER_RUNTIME": "node",
    "AzureWebJobsStorage": "{AzureWebJobsStorage}"
  },
  "Host": {
    "LocalHttpPort": 7071,
    "CORS": "*"
  }
}
```
4. Execute o comando:

```bash
> func host start
```

E ele irá listar todos os endpoints criados e necessários para persistir juntamente com o nosso Front-End.

5. Agora abre o projeto `front` e vão até: `src -> app -> funcionario.service.ts`

6. Ao entrar no arquivo `funcionario.service.ts`, basta alterar a uri para: `http://localhost:7071/api`

7. Execute o projeto Angular com o comando: 

```bash
> ng server -o
```

E vòilá! Só começar a persistir!

### API via CosmosDb - Azure Functions

1. Baixar o projeto abaixo:

- **[CRUD Serverless CosmosDb](https://github.com/glaucia86/crud-serverless-cosmosdb)**

2. Instalar as dependências necessárias com o comando:

```bash
> npm i
```

3. Criar um arquivo chamado: `local.settings.json` e incluir o bloco de código abaixo:

```json
{
  "IsEncrypted": false,
  "Values": {
    "AzureWebJobsStorage": "",
    "FUNCTIONS_WORKER_RUNTIME": "node",
    "CosmosDbUrl": "<cosmos-db-url>",
    "CosmosDBUser": "crud-serverless-wavy",
    "CosmosDBPassword": "<cosmos-db-password>"
  },
  "Host": {
    "LocalHttpPort": 7071,
    "CORS": "*"
  }
}
```

4. Execute o comando:

```bash
> func host start
```

E ele irá listar todos os endpoints criados e necessários para persistir juntamente com o nosso Front-End.

5. Agora abre o projeto `front` e vão até: `src -> app -> funcionario.service.ts`

6. Ao entrar no arquivo `funcionario.service.ts`, basta alterar a uri para: `http://localhost:7071/api`

7. Execute o projeto Angular com o comando: 

```bash
> ng server -o
```

E vòilá! Só começar a persistir!

### Quero migrar os dados persistidos localmente para o CosmosDb... Como faço?!

O processo de migração dos dados localmente persistidos pelo MongoDb para o CosmosDb é bem simples. Porém, recomendo que para deixar o processo mais fácil que baixem o **[MongodB Compass GUI](https://www.mongodb.com/download-center/compass)** e possuir uma conta do **[Conta - Azure](https://azure.microsoft.com/pt-br/?WT.mc_id=meanserverlessworkshop-github-gllemos)**. Tendo esses dois recursos,poderemos seguir com os seguintes passos abaixo:

1. Passo: abre o portal Azure e crie um Grupo de Recursos. Se tiver já um criado, ótimo!

```bash
> meanServerlessResourceGroup
```

2. Passo: agora vamos criar o Base de dados no Azure CosmosDb. Para isso, abre o seu bash no Portal Azure e execute os seguintes comandos abaixo:

```bash
> crud--serverless-<inclua-seu-nome>

> az cosmosdb create --name crud--serverless-<inclua-seu-nome> --resource group meanServerlessResourceGroup --kind MongoDB
```

3. Abre o recurso recém criado e capture as connections strings (primary key) criada no passo anterior.

4. Passo: agora vamos importar os dados localmente do MongoDb para o CosmosDb. Para isso, bastam abrir o MongoDb Compass e clicar em export file e salvar num local onde você deseja.

5. Passo: agora vamos executar o seguinte comando abaixo. Esse comando será responsável por migrar o arquivo criado no passo anterior para enviar para o CosmosDb. 

```bash
> mongoimport.exe --host crud--serverless-<inclua-seu-nome>.documents.azure.com:10255 -u crud--serverless-<inclua-seu-nome> -p <primary-key-criada-cosmosdb> --ssl --sslAllowInvalidCertificates --db crud--serverless-<inclua-seu-nome> --collection funcionarios --file funcionarios.json
```
E pronto! Ao abrir o Portal Azure e acessar o recurso do Azure CosmosDb, verá que os seus dados locais, foram migrados com sucesso no Azure CosmosDb!

## Deploy para o Azure ☁️

Para realizar o deploy da aplicação ao Azure precisamos seguir com alguns pessos:

Mas antes, vá até a pasta `front` e execute o seguinte o seguinte comando:

```bash
> ng build
```

Esse comando irá gerar uma pasta chamada `dist`. E é justamente essa pasta que precisaremos para realizar o deploy da nossa aplicação MEAN ao Azure.

1. Execute o seguinte comando dentro da pasta `dist` com o seguinte comando: 

```bash
> az webapp up -n <nombre-de-la-app>
```

E pronto! Agora podemos abrir a nossa aplicação no browser!

## Links & Recursos Importantes ⭐️

Durante o workshop, comentei sobre importantes documentações, links e recursos que podem auxiliar o seu conhecimento sobre Serverless & Azure Functions

- ✅ **[Azure para devs JavaScript & Node.js](https://docs.microsoft.com/pt-br/javascript/azure/?WT.mc_id=meanserverlessworkshop-github-gllemos&view=azure-node-latest)**
- ✅ **[Documentação Azure Functions](https://docs.microsoft.com/pt-br/azure/azure-functions/?WT.mc_id=meanserverlessworkshop-github-gllemos)**
- ✅ **[Criando a sua Primeira Função no Visual Studio Code](https://docs.microsoft.com/pt-br/azure/azure-functions/functions-create-first-function-vs-code?WT.mc_id=meanserverlessworkshop-github-gllemos)**
- ✅ **[Extensão Vs Code – Azure Functions](https://marketplace.visualstudio.com/items?itemName=ms-azuretools.vscode-azurefunctions&WT.mc_id=meanserverlessworkshop-github-gllemos)**
- ✅ **[E-Book Grátis - Azure Serverless Computing Cookbook](https://azure.microsoft.com/pt-br/resources/azure-serverless-computing-cookbook/?WT.mc_id=meanserverlessworkshop-github-gllemos)**
- ✅ **[Cursos Grátis - Azure Functions](https://docs.microsoft.com/pt-br/learn/paths/create-serverless-applications/?WT.mc_id=meanserverlessworkshop-github-gllemos)**

## Tenho Dúvidas... O que Faço?! ❓

Caso tenham dúvidas aos códigos dos projetos relacionados aos workshops, sintam-se a vontade em abrir uma **[ISSUE AQUI](https://github.com/glaucia86/workshop-mean-serverless/issues)**. Assim que possível, estarei respondendo as todas as dúvidas que tiverem!

**documentação em desenvolvimento**
