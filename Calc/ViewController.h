
#import <UIKit/UIKit.h>
#import "Model.h"

@interface ViewController : UIViewController {
    Model *_model;
}
@property (weak, nonatomic) IBOutlet UITextField *value1TextField;
@property (weak, nonatomic) IBOutlet UITextField *value2TextField;
@property (weak, nonatomic) IBOutlet UITextField *resultTextField;
- (IBAction)calc:(id)sender;
@end
