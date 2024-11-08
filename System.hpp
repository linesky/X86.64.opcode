#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxpages 8192
char *maxpagess[maxpages];
int maxpagesss=0;
class String;
class string;
class Integer;
class Long;
class Consoles;
class Int32;
class Double;
class Float;
class out;
class Systems;
class inss;
class String{
    protected :
        
    public :
        char *value=NULL;
        
       
        String(const char *obj){
            value=(char*)malloc(strlen(obj)+16);
            maxpagess[maxpagesss]=value;
            maxpagesss++;
            strcpy(value,obj);
        };
        String(String *obj){
            value=(char*)malloc(strlen(obj->value)+16);
            maxpagess[maxpagesss]=value;
            maxpagesss++;
            strcpy(value,obj->value);
        };
     
        void operator=(const char *obj){
            long i=strlen(obj)+16;
            value=(char*)realloc((void*)value,(size_t)i);

            strcpy(value,obj); 
            
            
        };

        String operator=(String *obj){
            String ress(obj->value);
            long i=strlen(obj->value)+16;
            value=(char*)realloc((void*)value,(size_t)i);
            strcpy(ress.value,obj->value); 
            return ress;
            
        };
         
        String operator+(String& obj){
            String ress(value);
            long i=strlen(obj.value)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            ress.value=(char*)realloc((void*)value,(size_t)i);   
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        String operator+(const char *obj){
            String ress(value);
            long i=strlen(obj)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            ress.value=(char*)realloc((void*)value,(size_t)i);
            strcat(ress.value,obj); 
            return ress;
            
        };
        






        String operator+=(String& obj){
            String ress(value);
            long i=strlen(obj.value)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t) i);
            ress.value=(char*)realloc((void*)value,(size_t)i);

            strcat(ress.value,obj.value); 
            return ress;
            
        };


        String operator+=(const char *obj){
            String ress(value);
            long i=strlen(obj)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            ress.value=(char*)realloc((void*)value,(size_t)i);
            strcat(ress.value,obj); 
            return ress;
            
        };
        

        char *ToString(){
            char *ccc=value;
            return ccc;

        }; 
};
class string{
    protected :
        
    public :
        char *value=NULL;
        
       
        string(const char *obj){
            value=(char*)malloc(strlen(obj)+16);
            maxpagess[maxpagesss]=value;
            maxpagesss++;
            strcpy(value,obj);
        };
        string(string *obj){
            value=(char*)malloc(strlen(obj->value)+16);
            maxpagess[maxpagesss]=value;
            maxpagesss++;
            strcpy(value,obj->value);
        };
     
        void operator=(const char *obj){
            long i=strlen(obj)+16;
            value=(char*)realloc((void*)value,(size_t)i);

            strcpy(value,obj); 
            
            
        };

        string operator=(string *obj){
            string ress(obj->value);
            long i=strlen(obj->value)+16;
            value=(char*)realloc((void*)value,(size_t)i);
            strcpy(ress.value,obj->value); 
            return ress;
            
        };
         
        string operator+(string& obj){
            string ress(value);
            long i=strlen(obj.value)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            ress.value=(char*)realloc((void*)value,(size_t)i);   
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        string operator+(const char *obj){
            string ress(value);
            long i=strlen(obj)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            ress.value=(char*)realloc((void*)value,(size_t)i);
            strcat(ress.value,obj); 
            return ress;
            
        };
        






        string operator+=(string& obj){
            string ress(value);
            long i=strlen(obj.value)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t) i);
            ress.value=(char*)realloc((void*)value,(size_t)i);

            strcat(ress.value,obj.value); 
            return ress;
            
        };


        string operator+=(const char *obj){
            string ress(value);
            long i=strlen(obj)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            ress.value=(char*)realloc((void*)value,(size_t)i);
            strcat(ress.value,obj); 
            return ress;
            
        };
        

        char *ToString(){
            char *ccc=value;
            return ccc;

        }; 
};
class Integer{
    protected :
        
     public :
        int value=0;
        Integer(int v){
            value=v;
        };
        Integer(Integer *v){
            value=v->value;
        };

        Integer(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Integer(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Integer(char *v){
            value=atoi(v);
        };
        Integer operator=(int& obj){
            Integer ii(obj);
            return ii;
            
            
        };
        Integer operator=(Integer *obj){
            Integer ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Integer operator+(int obj){
            Integer ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Integer operator+(Integer& obj){
            Integer ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Integer operator-(int obj){
            Integer ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Integer operator-(Integer& obj){
            Integer ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Integer operator*(int obj){
            Integer ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Integer operator*(Integer& obj){
            Integer ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Integer operator/(int obj){
            Integer ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Integer operator/(Integer& obj){
            Integer ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Integer operator%(int obj){
            Integer ii(value);
            ii.value=ii.value%obj;
            return ii;
            
            
        };
        Integer operator%(Integer& obj){
            Integer ii(value);
            ii.value=ii.value%obj.value;
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%d",value);
            return ccc;
        }; 


};
class Long{
    protected :
        
     public :
        long value=0;
        Long(long v){
            value=v;
        };
        Long(Long *v){
            value=v->value;
        };

        Long(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Long(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Long(char *v){
            value=atoi(v);
        };
        Long operator=(long& obj){
            Long ii(obj);
            return ii;
            
            
        };
        Long operator=(Long *obj){
            Long ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Long operator+(long obj){
            Long ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Long operator+(Long& obj){
            Long ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Long operator-(long obj){
            Long ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Long operator-(Long& obj){
            Long ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Long operator*(long obj){
            Long ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Long operator*(Long& obj){
            Long ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Long operator/(long obj){
            Long ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Long operator/(Long& obj){
            Long ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Long operator%(long obj){
            Long ii(value);
            ii.value=ii.value%obj;
            return ii;
            
            
        };
        Long operator%(Long& obj){
            Long ii(value);
            ii.value=ii.value%obj.value;
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%d",value);
            return ccc;
        }; 


};
class Float{
    protected :
        
     public :
        float value=0.00;
        Float(float v){
            value=v;
        };
        Float(Float *v){
            value=v->value;
        };

        Float(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Float(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Float(char *v){
            value=atoi(v);
        };
        Float operator=(float& obj){
            Float ii(obj);
            return ii;
            
            
        };
        Float operator=(Float *obj){
            Float ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Float operator+(float obj){
            Float ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Float operator+(Float& obj){
            Float ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Float operator-(float obj){
            Float ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Float operator-(Float& obj){
            Float ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Float operator*(float obj){
            Float ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Float operator*(Float& obj){
            Float ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Float operator/(float obj){
            Float ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Float operator/(Float& obj){
            Float ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Float operator%(float obj){
            Float ii(value);
            ii.value=(float)(int(ii.value)%int(obj));
            
            return ii;
            
            
        };
        Float operator%(Float& obj){
            Float ii(value);
            
            ii.value=(float)(int(ii.value)%int(obj.value));
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%f",value);
            return ccc;
        }; 


};


class Double{
    protected :
        
     public :
        double value=0;
        Double(double v){
            value=v;
        };
        Double(Double *v){
            value=v->value;
        };

        Double(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Double(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Double(char *v){
            value=atoi(v);
        };
        Double operator=(double& obj){
            Double ii(obj);
            return ii;
            
            
        };
        Double operator=(Double *obj){
            Double ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Double operator+(double obj){
            Double ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Double operator+(Double& obj){
            Double ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Double operator-(double obj){
            Double ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Double operator-(Double& obj){
            Double ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Double operator*(double obj){
            Double ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Double operator*(Double& obj){
            Double ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Double operator/(double obj){
            Double ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Double operator/(Double& obj){
            Double ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Double operator%(double obj){
            Double ii(value);
            ii.value=(double)(int(ii.value)%int(obj));
            return ii;
            
            
        };
        Double operator%(Double& obj){
            Double ii(value);
           ii.value=(double)(int(ii.value)%int(obj.value));
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%lf",value);
            return ccc;
        }; 


};
class Int32{
    protected :
        
     public :
        int value=0;
        Int32(int v){
            value=v;
        };
        Int32(Int32 *v){
            value=v->value;
        };

        Int32(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Int32(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Int32(char *v){
            value=atoi(v);
        };
        Int32 operator=(int& obj){
            Int32 ii(obj);
            return ii;
            
            
        };
        Int32 operator=(Int32 *obj){
            Int32 ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Int32 operator+(int obj){
            Int32 ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Int32 operator+(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Int32 operator-(int obj){
            Int32 ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Int32 operator-(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Int32 operator*(int obj){
            Int32 ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Int32 operator*(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Int32 operator/(int obj){
            Int32 ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Int32 operator/(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Int32 operator%(int obj){
            Int32 ii(value);
            ii.value=ii.value%obj;
            return ii;
            
            
        };
        Int32 operator%(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value%obj.value;
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%d",value);
            return ccc;
        }; 


};

class outs{
    protected :
        char c[4096];
    public : 
        void println(const char *c){
            puts(c);
        };
        void println(String c){
            puts(c.ToString());
        };
        void println(string c){
            puts(c.ToString());
        };
        void println(Integer c){
            puts(c.ToString());
        };
        void println(Long c){
            puts(c.ToString());
        };
        void println(){
            puts("");
        };
        void println(Float c){
            puts(c.ToString());
        };
        void println(Double c){
            puts(c.ToString());
        };
        void println(Int32 c){
            puts(c.ToString());
        };
        void println(float c){
            Float i(c);
            puts(i.ToString());
        };
        void println(double c){
            Double i(c);
            puts(i.ToString());
        };
        void println(long c){
            Long i(c);
            puts(i.ToString());
        };

        void println(int c){
            Int32 i(c);
            puts(i.ToString());
        };


        void print(const char *c){
            printf(c);
        };
        void print(String c){
            printf(c.ToString());
        };
        void print(string c){
            printf(c.ToString());
        };
        void print(Integer c){
            printf(c.ToString());
        };
        void print(Long c){
            printf(c.ToString());
        };
        void print(Float c){
            printf(c.ToString());
        };
        void print(Double c){
            printf(c.ToString());
        };

        void print(Int32 c){
            printf(c.ToString());
        };
        void print(float c){
            Float i(c);
            printf(i.ToString());
        };
        void print(double c){
            Double i(c);
            printf(i.ToString());
        };
        void print(long c){
            Long i(c);
            printf(i.ToString());
        };

        void print(int c){
            Int32 i(c);
            printf(i.ToString());
        };



        char *Readln(const char *c){
            char ccc[4096];
            char *c1=ccc;
            printf(c);
            fgets(ccc,4095,stdin);
            return c1;
        };



};

class inss{
        char *Readln(const char *c){
            char ccc[4096];
            char *c1=ccc;
            printf(c);
            fgets(ccc,4095,stdin);
            return c1;
        };



};

class Systems{
    public:
        outs out;
        inss in;
};
void frees(){
    long i=0;
    if (i>0)for (i=0;i<maxpagesss;i++)if( maxpagess[i]!=NULL)free( maxpagess[i]);
}
Systems System;
