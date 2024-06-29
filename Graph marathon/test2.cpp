#include<bits/stdc++.h>
#include<time.h>
using namespace std::chrono;
using namespace std;

int main()
{
    FILE *file;
    file = fopen("input2.txt","w");

    int arr[100],i;

    //Time count starts
    auto start = high_resolution_clock::now();
    //Putting random values
    for(i=0; i<100; i++)
    {
        arr[i] = 1+rand()%100;
    }

    //Printing values
    cout<<"Unsorted : "<<endl;
    for(i=0; i<100; i++)
    {
        cout<<arr[i]<<" ";
    }

    //Sorting values using bubble sort
    for(i=0; i<100; i++)
    {
        for(int j=i+1; j<100; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }

    //Printing sorted values
    cout<<endl<<"Sorted : "<<endl; 
    for(i=0; i<100; i++)
    {
        cout<<arr[i]<<" ";
    }
    //saving values inside folder
    for(i=0; i<100; i++)
    {
        fprintf(file,"%d ",arr[i]);
    }
    fclose(file);

    int value=32;
    //Reading values from file
    file = fopen("input2.txt","r");
    
    //Linear search
    for(i=0; i<100; i++)
    {
        fscanf(file,"%d",&arr[i]);
        if(arr[i]==value)
        {
            
            cout<<"Value found"<<endl;
            break;
        }
        else
        {
            cout<<endl<<"Not found"<<endl;
            break;
        }
    }
    fclose(file);

    auto end_of_linear_search = high_resolution_clock::now();
    auto duration_of_Linear_search = duration_cast<nanoseconds>(end_of_linear_search-start);
    cout<<"Time needed to do Linaer search = "<<duration_of_Linear_search.count()<<" nanoseconds"<<endl;

    file = fopen("input2.txt","r");

    auto start_binary_search = high_resolution_clock::now();
    //Binary search 
    int mid_value,high_value=99,low_value=0;
    mid_value=(high_value+low_value)/2;
    while(low_value<=high_value)
    { 
        mid_value = (high_value+low_value)/2;
        fscanf(file,"%d",&arr[mid_value]);
        if(arr[mid_value] == value)
        {
            cout<<"Found"<<endl;
        }
        else if(value<arr[mid_value])
        {
            high_value = mid_value-1;
            
        }
        else if(value>arr[mid_value])
        {
            low_value = mid_value+1;
            
        }
        else
        {
            cout<<"Not found"<<endl;
        }
        
    }
    fclose(file);

    auto end_binary_search = high_resolution_clock::now();
    auto duration_for_binary_search = duration_cast<nanoseconds>(end_binary_search-start_binary_search);
    cout<<"Time needed for binary search = "<<duration_for_binary_search.count()<<" nanoseconds"<<endl;
    
    return 0;
}