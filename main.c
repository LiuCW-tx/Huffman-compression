#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  char code[42] = {'a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d'};
  int weight[4] = {0};
  for (int i=1;i<=42;i++)
    {
      if (code[i]='a')
            weight[0]++;
     else if (code[i]='b')
            weight[1]++;
        else if (code[i]='c')
            weight[2]++;
        else
            weight[3]++;
    }

void P()
 {int a,b,t;
     for(a=0; a<3; a++)
       {
      for(b=a+1; b<3-a;b++)
         {
        if(weight[b] < weight[b+1])
         {
            t = weight[b];
            weight[b] = weight[b+1];
            weight[b+1] = t;

          }
   }
  }
 }
}
int node[3]={0};
void P()
node[0]=weight[0]+weight[1];

void Nodeproduce()
{
	for (int i = symbol_num; i < node_num; i++)
	{
		H[i].weight = H[min0].weight + H[min1].weight;
		symbol_Ptemp[i] = H[i].weight;
		H[i].lchild = min0;
		H[i].rchild = min1;
		H[min0].parent = i;
		H[min1].parent = i;
		symbol_Ptemp[0] = 1.0;
		symbol_Ptemp[1] = 1.0;
		Bubble();
	}
}
