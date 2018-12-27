#include<stdio.h>
#include<stdlib.h>
  int a [10][10],n;
  void creategraph() 
  {
    int i,j;
    printf("Enter the no. of vetices\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
      if(i==j)
        a[i][j]=0;
      else if(j>i)  
      {
      printf("Do you want to insert edge between %d and %d\n",i,j);
      scanf("%d",&a[i][j]);
      a[j][i]=a[i][j];
      }
    }
  }
  void showgraph()  
  {
    int i,j;
    for(i=1;i<=n;i++)  
    {
        for(j=1;j<=n;j++)
          printf("%d\t",a[i][j]);
        printf("\n\n");
    }
  }
  void insertvertex()
  {
    int j;
    
    n++;
    for(j=1;j<n;j++)
    {
      char ch,m;
      printf("Do u want to add %d as adjacent to %d\n",j,n);
      scanf("%c",&m);
      printf("enter y or n\n");
      ch=m;
      if(ch=='y')  
      {
        a[n][j]=1;
        a[j][n]=1;
      }
      else 
      {
        a[n][j]=0;
        a[j][n]=0;
      }
    }
  }
  void insertedge() 
  {
    int i,j;
    printf("Enter the edge to be inserted");
    scanf("%d%d",&i,&j);
    a[i][j]=1;
    a[j][i]=1;
  }
  void deleteedge() 
  {
    int i,j;
    printf("Enter the edge to be deleted");
    scanf("%d%d",&i,&j);
    a[i][j]=0;
    a[j][i]=0;
  }
  void deletevertex() 
  {
    int i,j;
    printf("Enter the vertex to be deleted");scanf("%d",&i);
    for(j=1;j<=n;j++)
    {
    a[i][j]=0;
    a[j][i]=0;
    }
  }
  void findvertex()
  {
      int i,j,f=0;
      printf("Enter the vertex to be searched");
      scanf("%d",&i);
      for(j=1;j<=n;j++)
      if(a[i][j]==1) 
      {
        f=1;
        break;
      }
      if(f==1)
       printf("Vertex %d found",i);
      else
       printf("Vertex %d not found",i);
  }
  void main()   
  {
    int ch,i;
      
  creategraph();
  while(1) 
  {
    printf("\n1.Insert a vertex\n2.Delete a vertex\n3.Insert an edge\n4.Delete an edge\n5.Find a vertex\n6.Display\nAny other to Quit\nEnter your choice");
    
    scanf("%d",&ch);
    switch(ch){
        case 1:
          insertvertex();
          break;
        case 2:
          deletevertex();
          break;
        case 3:
          insertedge();
          break;#include<stdio.h>
#include<stdlib.h>
  int a [10][10],n;
  void creategraph() 
  {
    int i,j;
    printf("Enter the no. of vetices\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
      if(i==j)
        a[i][j]=0;
      else if(j>i)  
      {
      printf("Do you want to insert edge between %d and %d\n",i,j);
      scanf("%d",&a[i][j]);
      a[j][i]=a[i][j];
      }
    }
  }
  void showgraph()  
  {
    int i,j;
    for(i=1;i<=n;i++)  
    {
        for(j=1;j<=n;j++)
          printf("%d\t",a[i][j]);
        printf("\n\n");
    }
  }
  void insertvertex()
  {
    int j;
    
    n++;
    for(j=1;j<n;j++)
    {
      char ch,m;
      printf("Do u want to add %d as adjacent to %d\n",j,n);
      scanf("%c",&m);
      printf("enter y or n\n");
      ch=m;
      if(ch=='y')  
      {
        a[n][j]=1;
        a[j][n]=1;
      }
      else 
      {
        a[n][j]=0;
        a[j][n]=0;
      }
    }
  }
  void insertedge() 
  {
    int i,j;
    printf("Enter the edge to be inserted");
    scanf("%d%d",&i,&j);
    a[i][j]=1;
    a[j][i]=1;
  }
  void deleteedge() 
  {
    int i,j;
    printf("Enter the edge to be deleted");
    scanf("%d%d",&i,&j);
    a[i][j]=0;
    a[j][i]=0;
  }
  void deletevertex() 
  {
    int i,j;
    printf("Enter the vertex to be deleted");scanf("%d",&i);
    for(j=1;j<=n;j++)
    {
    a[i][j]=0;
    a[j][i]=0;
    }
  }
  void findvertex()
  {
      int i,j,f=0;
      printf("Enter the vertex to be searched");
      scanf("%d",&i);
      for(j=1;j<=n;j++)
      if(a[i][j]==1) 
      {
        f=1;
        break;
      }
      if(f==1)
       printf("Vertex %d found",i);
      else
       printf("Vertex %d not found",i);
  }
  void main()   
  {
    int ch,i;
      
  creategraph();
  while(1) 
  {
    printf("\n1.Insert a vertex\n2.Delete a vertex\n3.Insert an edge\n4.Delete an edge\n5.Find a vertex\n6.Display\nAny other to Quit\nEnter your choice");
    
    scanf("%d",&ch);
    switch(ch){
        case 1:
          insertvertex();
          break;
        case 2:
          deletevertex();
          break;
        case 3:
          insertedge();
          break;
        case 4:
          deleteedge();
          break;
        case 5:
          findvertex();
          break;
        case 6:
          printf("The Graph is :\t\n");
          showgraph();
          break;
        default: 
          exit(0);
  
  }
  }
  }


        case 4:
          deleteedge();
          break;
        case 5:
          findvertex();
          break;
        case 6:
          printf("The Graph is :\t\n");
          showgraph();
          break;
        default: 
          exit(0);
  
  }
  }
  }

