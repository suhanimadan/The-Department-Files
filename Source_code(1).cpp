#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> caseFiles;

void showCaseFiles()
{
    cout<<endl;
    cout << "   CASE FILES    ";
    cout<<endl;

    if(caseFiles.empty())
    {
        cout << "No evidence collected yet.\n";
    }
    else
    {
        for(int i=0;i<caseFiles.size();i++)
        {
            cout << (i+1) <<". "<<caseFiles[i]<<endl;
        }
    }

    cout<<endl;
}

//class room
void classroomScene()
{
    int choice;

        cout << "           CLASSROOM 214      \n";
   cout<<endl;

    cout << "Time: 8:45 PM\n\n";

    cout << "The college campus is nearly empty.\n";

    cout << "You receive a strange anonymous message:\n\n";

    cout << "\"Come to Classroom 214 immediately.\"\n\n";

    cout << "You slowly walk toward the old classroom.\n";

    cout << "The hallway lights flicker.\n";

    cout << "A cold silence fills the corridor.\n\n";

    cout << "You open the classroom door carefully...\n\n";

    while(true)
    {
        cout << "\nWhat would you like to investigate?\n\n";

        cout << "1. Inspect Teacher's Desk\n";
        cout << "2. Check Blackboard\n";
        cout << "3. Open Last Bench Drawer\n";
        cout << "4. Look Near Window\n";
        cout << "5. View Case Files\n";
        cout << "6. Leave Classroom\n\n";

        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;

        switch(choice)
        {
            case 1:
            {
                cout << "You inspect the teacher's desk carefully.\n";

                cout << "Under a pile of papers, you find a torn ID card.\n";

                bool found = false;

                for(int i = 0; i < caseFiles.size(); i++)
{
    if(caseFiles[i] == "Torn ID Card")
    {
        found = true;
    }
}

                if(!found)
                {
                    caseFiles.push_back("Torn ID Card");

                    cout << "[Evidence Added: Torn ID Card]\n";
                }
                else
                {
                    cout << "You already collected this evidence.\n";
                }

                break;
            }

            case 2:
            {
                cout << "You stare at the blackboard.\n";

                cout << "Written in red chalk are the words:\n\n";

                cout << "\"THE LIBRARY KNOWS EVERYTHING\"\n\n";

                cout << "A strange feeling runs down your spine.\n";

                break;
            }

            case 3:
            {
                cout << "You slowly open the last bench drawer.\n";

                cout << "Inside, you discover a Physics Lab Key.\n";

                bool found = false;

                for(int i = 0; i < caseFiles.size(); i++)
{
    if(caseFiles[i] == "Physics Lab key" )
    {
        found = true;
    }
}
                if(!found)
                {
                    caseFiles.push_back("Physics Lab Key");

                    cout << "[Evidence Added: Physics Lab Key]\n";
                }
                else
                {
                    cout << "You already collected this evidence.\n";
                }

                break;
            }

            case 4:
            {
                cout << "You walk toward the classroom window.\n";

                cout << "Outside, you notice a shadow moving near the Physics Department.\n";

                cout << "Before you can focus, it disappears.\n";

                break;
            }

            case 5:
            {
                showCaseFiles();

                break;
            }

            case 6:
            {
                cout << "You leave Classroom 214 slowly.\n";

                cout << "But you feel like someone is watching you...\n\n";

                cout<<endl;

                return;
            }

            default:
            {
                cout << "Invalid choice. Try again.\n";
            }
        }
    }
}
// Physics dept
void physicsDepartment()
{
    int choice;

    while(true)
    {
        cout<<endl;
        cout << "         PHYSICS DEPARTMENT\n";
         cout<<endl;

        cout << "1. Inspect Laboratory\n";
        cout << "2. Check Experiment Table\n";
        cout << "3. View Case Files\n";
        cout << "4. Return\n\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "\nBroken instruments are scattered everywhere.\n";

                cout << "You notice strange burn marks on the wall.\n";


                break;
            }

            case 2:
            {
                cout << "\nYou find a Burnt Research Paper.\n";

                bool found = false;

                for(int i = 0; i < caseFiles.size(); i++)
                {
                    if(caseFiles[i] == "Burnt Research Paper")
                    {
                        found = true;
                    }
                }

                if(!found)
                {
                    caseFiles.push_back("Burnt Research Paper");
                    cout << "[Evidence Added]\n";
                }


                break;
            }

            case 3:
            {
                showCaseFiles();


                break;
            }

            case 4:
            {
                return;
            }

            default:
            {
                cout << "Invalid choice.\n";
            }
        }
    }
}

// Mathematics dept
void mathematicsDepartment()
{
     cout<<endl;
    cout << "       MATHEMATICS DEPARTMENT\n";
     cout<<endl;

    cout << "Equations cover every wall.\n";
    cout << "One equation is circled repeatedly:\n\n";

    cout << "214 = FINAL ROOM\n\n";


}

// chemistry lab
void chemistryLab()
{
     cout<<endl;
    cout << "           CHEMISTRY LAB\n";
    cout<<endl;

    cout << "Broken glass and chemical smell fill the lab.\n";

    cout << "You discover blood stained gloves near the sink.\n";

    bool found = false;

    for(int i = 0; i < caseFiles.size(); i++)
    {
        if(caseFiles[i] == "Stained Gloves")
        {
            found = true;
        }
    }

    if(!found)
    {
        caseFiles.push_back("Stained Gloves");
        cout << "[Evidence Added]\n";
    }


}

// CIVIL DEPARTMENT
void civilDepartment()
{
    cout<<endl;
    cout << "          CIVIL DEPARTMENT\n";
     cout<<endl;

    cout << "You find an old underground blueprint.\n";

    bool found = false;

    for(int i = 0; i < caseFiles.size(); i++)
    {
        if(caseFiles[i] == "Underground Blueprint")
        {
            found = true;
        }
    }

    if(!found)
    {
        caseFiles.push_back("Underground Blueprint");
        cout << "[Evidence Added]\n";
    }


}

// Library
void libraryScene()
{
    cout<<endl;
    cout << "            CENTRAL LIBRARY\n";
     cout<<endl;

    cout << "You search the dusty archives.\n";

    cout << "Inside an old file, you discover the truth.\n\n";

    cout << "A secret experiment was conducted inside the college.\n";

    cout << "The missing student tried to expose it.\n\n";

    cout << "Suddenly...\n";

    cout << "Footsteps echo behind you.\n\n";

    cout << "You look in that direction. \n";

    cout << "NO ONE\n";

    cout << "You leave and go ahead with the search. \n";

}

// select the dept
void departmentMenu()
{
    int choice;

    while(true)
    {
        cout<<endl;
        cout << "          COLLEGE MAP\n";
         cout<<endl;


        cout << "1. Physics Department\n";
        cout << "2. Mathematics Department\n";
        cout << "3. Chemistry Lab\n";
        cout << "4. Civil Department\n";
        cout << "5. Central Library\n";
        cout << "6. View Case Files\n";
        cout << "7. Main Ground\n\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
          case 1:
                physicsDepartment();
                break;

            case 2:
                mathematicsDepartment();
                break;

            case 3:
                chemistryLab();
                break;

            case 4:
                civilDepartment();
                break;

            case 5:
                libraryScene();
                break;

            case 6:
                showCaseFiles();

                break;

            case 7:
                cout << "\n Left the Department in Main Ground Now \n";
                cout<<endl;
                return;

            default:
                cout << "Invalid choice.\n";
        }
    }
}
void showmessage()
{
    cout << "Time: 9:38 PM\n\n";
    cout << "Your phone suddenly vibrates...\n\n";

cout<<endl;
cout << "         UNKNOWN NUMBER       \n";
cout<<endl;

cout << "\"Stop investigating Classroom 214.\"\n";
cout << "\"Some secrets should stay buried.\"\n";
cout << "\"Leave now... or you're next.\"\n\n";

cout<<endl;

cout << "Your heartbeat starts getting faster.\n";
cout << "A cold chill runs down your spine.\n\n";
}
void finalChoice()
{
    int choice;
    cout<<"Now what you you wanna do\n";
    cout<<"1. Go back to the Classroom 214 and RISK IT AGAIN!!!  \n\n";
    cout<<"2. RUN FOR YOUR LIFE";

cout<<endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            cout<<"\nYou slowly walk back toward Classroom 214.\n\n";
            cout<<"The classroom door is already open.\n";
            cout<<"The lights flicker violently.\n\n";
            cout<<"You step inside carefully...\n\n";
            cout<<"\nSuddenly...\n";
            cout<<"FOOTSTEPS RUN TOWARD YOU.\n";
            cout<<"Before you can react...\n";
            cout<<"Someone attacks you from behind.\n\n";
            cout<<"Your vision becomes blurry...\n";
            cout<<"Everything fades into darkness...\n\n";


        cout<<endl;
            cout << "         END OF CHAPTER 1!!!\n"<<endl;
            cout<<"       TO BE CONTINUED     \n\n";

             cout<<endl;




            return;
        }

        case 2:
        {
            cout << "\nYou decide to leave the college immediately.\n";

            cout << "As you walk away, your phone vibrates one last time.\n\n";

            cout << "\"You made the right choice.\"\n\n";

            cout << "You never return to the campus again.\n\n";

            cout << "          GAME ENDED!!!!!!          \n";



            return;
        }

        default:
        {
            cout << "Invalid choice.\n";
           finalChoice();
        }
    }
}

int main()
{
    cout<<endl;
    cout << "       THE DEPARTMENT FILES\n";
     cout<<endl;

    cout << "\nA Thriller Mystery Investigation Game\n";

    classroomScene();
    departmentMenu();
    showmessage();
    finalChoice();

    return 0;
}
