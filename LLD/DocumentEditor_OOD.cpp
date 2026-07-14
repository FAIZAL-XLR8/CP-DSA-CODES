/*pehla chiz sochna hai ki document ediotr me document save krna hoga decument
save ek alag kahani save krna hai to kaha krna hai
persistance pr* = new persistance()*/
#include<bits/stdc++.h>
using namespace std;
class DocumentElement{
    

    public :
    DocumentElement(){};

    //now each element has some properties right? --> render()
    virtual string  render() = 0; // it must return a rendering string
    
};
class TextElement : public DocumentElement{
    string content;
    public :
    TextElement(string content) : content(content){};
    string render () override
    {
        return  content;
    }

};
class ImageElement : public DocumentElement{
    private : 
    string content;
    public :
    ImageElement(string content) : content(content){};
    string render () {
        return "[image] : " + content;
    }
};
class Document{
    public :
    //we cant write public text, video kal ko audio aaya toh? we have to make a interface class abstract -->doc element --> each of thise elements will derive that cclass -->
    Document(){};
    vector<DocumentElement*> ele; // cant make vectors for each type of doc element so made an abstract for doc elemnt how each eleemtn text/image will derive it and has a property render so override
    void addElement(DocumentElement* element)
    {
        ele.push_back(element);
    }
    vector<DocumentElement*> getAllElement()
    {
        return ele;
    }
 
};
 class RenderDoc{
    private :

  
    public :
    
    string renderedResult = "";
    string renderDoc(Document* doc)
    {
    for (auto ee : doc -> getAllElement()){
        renderedResult += ee -> render();
    }
    return renderedResult;
}

 };

class Persistence{
    public:
    virtual void save(string data) = 0;
};
class SaveToSQL : public Persistence{
    Document* doc;
    public  :
  
    void save (string data){
        cout <<"saved to SQL DB : " << "yes" << endl;
    }
};
class DocumentEditor{
    private : 
    Document* doc;
    Persistence* per;
    RenderDoc* rd;
    public:
    DocumentEditor(Document* doc, Persistence* per) : doc(doc), per(per){};
    void add_text(string data){
        doc ->addElement(new TextElement(data));
    };
    void add_image(string data){
        doc -> addElement (new ImageElement(data));
    };
    void renderDoc()
    {
        rd = new RenderDoc();
        cout << rd ->renderDoc(doc) << endl;
    }
    void save_doc(){
       
        per -> save(rd->renderDoc(doc));
    }; 
    
};
int main()
{
    //client is here
    Document *doc = new Document();
    Persistence *per = new SaveToSQL();
    DocumentEditor* de = new DocumentEditor(doc, per);
    de -> add_text("alpha");
    de -> add_image("beta");
    de -> renderDoc();
    de->save_doc();
}