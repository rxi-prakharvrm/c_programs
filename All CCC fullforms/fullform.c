/* program to know all the computer related full forms alphabetically */

#include <stdio.h>

int main() {
    char choice_alpha;
    int choice_num;
    while(1) {
        printf("For Exit Application enter 'Y'/'y'\n");
        printf("\nEnter an Alphabet: ");
        scanf("%c", &choice_alpha);
        printf("\n\n");

        if(choice_alpha == 'A' || choice_alpha == 'a'){
                printf("1. AEPS\n");
                printf("2. ABRS\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {
                    case 1: printf("\nAadhar Enabled Payment System\n\n\n");
                            break;

                    case 2: printf("\nAadhar - Based Remittance Service\n\n\n");
                            break;
                }
        }
        else if(choice_alpha == 'B' || choice_alpha == 'b'){
                printf("1. BOI\n");
                printf("2. BFD(1)\n");
                printf("3. BFD(2)\n");
                printf("4. BFD(3)\n");
                printf("5. BSNL\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nBank of India\n\n\n");
                            break;

                    case 2: printf("\n\n\nBest finger Detection\n\n\n");
                            break;

                    case 3: printf("\n\n\nBidirectional forwarding Detection\n\n\n");
                            break;

                    case 4: printf("\n\n\nBinary file Descriptor\n\n\n");
                            break;

                    case 5: printf("\n\n\nBharat Sanchar Nigam Limited\n\n\n");
                            break;

                }
        }
        else if(choice_alpha == 'C' || choice_alpha == 'c'){
                printf("1. CCC\n");
                printf("2. CPU\n");
                printf("3. CU\n");
                printf("4. CD-RW\n");
                printf("5. CARD\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nCourse on Computer Concept\n\n\n");
                            break;

                    case 2: printf("\n\n\nCentral Processing Unit\n\n\n");
                            break;

                    case 3: printf("\n\n\nControl Unit\n\n\n");
                            break;

                    case 4: printf("\n\n\nCompact Disk - Re Writtable\n\n\n");
                            break;

                    case 5: printf("\n\n\nComputer Aided Research and Development\n\n\n");
                            break;

                }
        }
        else if(choice_alpha == 'D' || choice_alpha == 'd'){
                printf("1. DES\n");
                printf("2. DBMS\n");
                printf("3. DRAM\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nData Encryption Standard\n\n\n");
                            break;

                    case 2: printf("\n\n\nData Base Management System\n\n\n");
                            break;

                    case 3: printf("\n\n\nDynamic Random Access Memory\n\n\n");
                            break;

                }
        }
        else if(choice_alpha == 'E' || choice_alpha == 'e'){
                printf("1. EPROM\n");
                printf("2. EEPROM\n");
                printf("3. ENIAC\n");
                printf("4. ECB\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nErasable Programmable Read Only Memory\n\n\n");
                            break;

                    case 2: printf("\n\n\nElectrically Erasable Programmable Read Only Memory\n\n\n");
                            break;

                    case 3: printf("\n\n\nElectronic Numerical Integrator and Computer\n\n\n");
                            break;

                    case 4: printf("\n\n\nExternal Commercial Borrowings\n\n\n");
                            break;

                }
        }
        else if(choice_alpha == 'F' || choice_alpha == 'f'){
                printf("1. FDD\n");
                printf("2. FAT\n");
                printf("3. FD\n");
                printf("4. FDM\n");
                printf("5. FIFO\n");
                printf("6. FILO\n");
                printf("7. FM\n");
                printf("8. FTP\n");
                printf("9. FSK\n");
                printf("10. FORTRAN\n");
                printf("10. FET\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nFloppy Disk Drive\n\n\n");
                            break;

                    case 2: printf("\n\n\nFile Allocation Table\n\n\n");
                            break;

                    case 3: printf("\n\n\nFloppy Disk\n\n\n");
                            break;

                    case 4: printf("\n\n\nFrequency Division Multiplexing\n\n\n");
                            break;

                    case 5: printf("\n\n\nFile Allocation Table\n\n\n");
                            break;

                    case 6: printf("\n\n\nFirst - in, First - out\n\n\n");
                            break;

                    case 7: printf("\n\n\nFrequency Modulation\n\n\n");
                            break;

                    case 8: printf("\n\n\nFile Transfer Protocol\n\n\n");
                            break;

                    case 9: printf("\n\n\nFrequency Shift Keying\n\n\n");
                            break;

                    case 10: printf("\nFormula Translation\n\n\n");
                            break;

                    case 11: printf("\n\n\nEifel Effect Transitory\n\n\n");
                            break;
                }
        }
        else if(choice_alpha == 'G' || choice_alpha == 'g'){
                printf("1. GP\n");
                printf("2. GB\n");
                printf("3. GIGO\n");
                printf("4. GIS\n");
                printf("5. GPL\n");
                printf("6. GPS\n");
                printf("7. GUI\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nGraphics Port\n\n\n");
                            break;

                    case 2: printf("\n\n\nGiga Bytes\n\n\n");
                            break;

                    case 3: printf("\n\n\nGarbage In Garbage Out\n\n\n");
                            break;

                    case 4: printf("\n\n\nGraphical Information System\n\n\n");
                            break;

                    case 5: printf("\n\n\nGeneral Public License\n\n\n");
                            break;

                    case 6: printf("\n\n\nGlobal Positioning System\n\n\n");
                            break;

                    case 7: printf("\n\n\nGraphical User Interface\n\n\n");
                            break;
                }
        }
        else if(choice_alpha == 'H' || choice_alpha == 'h'){
                printf("1. HLL\n");
                printf("2. HP\n");
                printf("3. HTML\n");
                printf("4. HTTP\n");
                printf("5. HDMI\n");
                printf("6. HDD\n");
                printf("7. HDFC\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nHigh Level Language\n\n\n");
                            break;

                    case 2: printf("\n\n\nHewlett Packard\n\n\n");
                            break;

                    case 3: printf("\n\n\nHyper Text Markup Language\n\n\n");
                            break;

                    case 4: printf("\n\n\nHyper Text Transfer Protocol\n\n\n");
                            break;

                    case 5: printf("\n\n\nHigh Definition Multimedia Interface\n\n\n");
                            break;

                    case 6: printf("\n\n\nHard Disk Drive\n\n\n");
                            break;

                    case 7: printf("\n\n\nHousing Development Finance Corporation Limited\n\n\n");
                            break;
                }
        }
        else if(choice_alpha == 'I' || choice_alpha == 'i'){
                printf("1. IBM\n");
                printf("2. IC\n");
                printf("3. I/O\n");
                printf("4. IP\n");
                printf("5. IRC\n");
                printf("6. ISDN\n");
                printf("7. ISH\n");
                printf("8. ISO\n");
                printf("9. ISP\n");
                printf("10. IT\n");
                printf("11. ICT\n");
                printf("12. IIT\n");
                printf("13. ITI\n");
                printf("14. ICICI\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nInternational Business Machine\n\n\n");
                            break;

                    case 2: printf("\n\n\nIntegrated Circuit\n\n\n");
                            break;

                    case 3: printf("\n\n\nInput-Output\n\n\n");
                            break;

                    case 4: printf("\n\n\nInternet Protocol\n\n\n");
                            break;

                    case 5: printf("\n\n\nInternet Relay Chat\n\n\n");
                            break;

                    case 6: printf("\n\n\nIntegrated Services Digital Network\n\n\n");
                            break;

                    case 7: printf("\n\n\nInformation Super Highway\n\n\n");
                            break;

                    case 8: printf("\nInternational Standards Organization\n\n\n");
                            break;

                    case 9: printf("\n\n\nInternet Service Provider\n\n\n");
                            break;

                    case 10: printf("\n\n\nInformation Technology\n\n\n");
                            break;

                    case 11: printf("\n\n\nInternet Communication Technology\n\n\n");
                            break;

                    case 12: printf("\n\n\nIndian Institutes of Technology\n\n\n");
                            break;

                    case 13: printf("\n\n\nIndustrial Training Institutes\n\n\n");
                            break;

                    case 14: printf("\n\n\nInternational Credit and Investment Corporation of India\n\n\n");
                            break;
                }
        }
        else if(choice_alpha == 'J' || choice_alpha == 'j'){
                printf("1. JPG\n");
                printf("2. JPEG\n");
                printf("3. JRE\n");
                printf("4. JSP\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nJoint Photographic Experts Group\n\n\n");
                            break;

                    case 2: printf("\n\n\nJoint Photographic Experts Group\n\n\n");
                            break;

                    case 3: printf("\n\n\nJava Runtime Engine\n\n\n");
                            break;

                    case 4: printf("\n\n\nJava Server Pages\n\n\n");
                            break;
                }
        }
        else if(choice_alpha == 'K' || choice_alpha == 'k'){
                printf("1. KB\n");
                printf("2. KIPS\n");
                printf("3. KB/S\n");
                printf("4. KYC\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nKilo Bytes\n\n\n");
                            break;

                    case 2: printf("\n\n\nKnowledge Information Processing System\n\n\n");
                            break;

                    case 3: printf("\n\n\nKilo Bytes per Second\n\n\n");
                            break;

                    case 4: printf("\n\n\nKnow Your Customer\n\n\n");
                            break;
                }
        }
        else if(choice_alpha == 'L' || choice_alpha == 'l'){
                printf("1. LAN\n");
                printf("2. LASER\n");
                printf("3. LCD\n");
                printf("4. LD\n");
                printf("5. LED\n");
                printf("6. LISP\n");
                printf("7. LLL\n");
                printf("8. LSD\n");
                printf("9. LSI\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nLocal Area Network\n\n\n");
                            break;

                    case 2: printf("\n\n\nLight Amplification for Stimulated Emission of Radiation\n\n\n");
                            break;

                    case 3: printf("\n\n\nLiquid Crystal Display\n\n\n");
                            break;

                    case 4: printf("\n\n\nLaser Diod\n\n\n");
                            break;

                    case 5: printf("\n\n\nLight Emitting Diod\n\n\n");
                            break;

                    case 6: printf("\n\n\nList Processing\n\n\n");
                            break;

                    case 7: printf("\n\n\nLow Level Language\n\n\n");
                            break;

                    case 8: printf("\n\n\nLeast Significant Digit\n\n\n");
                            break;

                    case 9: printf("\n\n\nLarge Scale Integration\n\n\n");
                            break;
                }
        }
        else if(choice_alpha == 'M' || choice_alpha == 'm'){
                printf("1. MAN\n");
                printf("2. MB\n");
                printf("3. MHz\n");
                printf("4. MICR\n");
                printf("5. MIDI\n");
                printf("6. MIPS\n");
                printf("7. MODEM\n");
                printf("8. MOPS\n");
                printf("9. MOS\n");
                printf("10. MPEG\n");
                printf("11. MP3\n");
                printf("12. MS\n");
                printf("13. MSD\n");
                printf("14. MSI\n");
                printf("15. MTBF\n");
                printf("16. MTNL\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice_num);

                switch(choice_num) {

                    case 1: printf("\nMetropolitan Area Network\n\n\n");
                            break;

                    case 2: printf("\n\n\nMega Bytes\n\n\n");
                            break;

                    case 3: printf("\n\n\nMega Hertz\n\n\n");
                            break;

                    case 4: printf("\n\n\nMagnetic Inc Character Recognition\n\n\n");
                            break;

                    case 5: printf("\n\n\nMusical Instrument digital Interface\n\n\n");
                            break;

                    case 6: printf("\n\n\nMillion Instructions per Second\n\n\n");
                            break;

                    case 7: printf("\n\n\nModulator - Demodulator\n\n\n");
                            break;

                    case 8: printf("\n\n\nMillion Operations Per Second\n\n\n");
                            break;

                    case 9: printf("\n\n\nMetal Oxide Semiconductor\n\n\n");
                            break;

                    case 10: printf("\n\n\nMoving Picture Expert Group\n\n\n");
                            break;

                    case 11: printf("\n\n\nMPEG-I Audio Layer 3\n\n\n");
                            break;

                    case 12: printf("\n\n\nMicrosoft\n\n\n");
                            break;

                    case 13: printf("\n\n\nMost Significant Digit\n\n\n");
                            break;

                    case 14: printf("\n\n\nMedium Scale Integration\n\n\n");
                            break;

                    case 15: printf("\n\n\nMean Time Between Failure\n\n\n");
                            break;

                    case 16: printf("\n\n\nMahanagar Telephone Nigam Limited\n\n\n");
                            break;
                }
        }
        else if(choice_alpha == 'Y' || choice_alpha == 'y'){
            exit(0);
        }
    }
    return 0;
}
