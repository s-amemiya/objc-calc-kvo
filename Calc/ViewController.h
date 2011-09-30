//
//  ViewController.h
//  Calc
//
//  Created by Shinya Amemiya on 9/30/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Model.h"

@interface ViewController : UIViewController {
    Model *_model;
    UITextField *_value1TextField;
    UITextField *_value2TextField;
    UITextField *_resultTextField;
}
@property (nonatomic, retain) IBOutlet UITextField *value1TextField;
@property (nonatomic, retain) IBOutlet UITextField *value2TextField;
@property (nonatomic, retain) IBOutlet UITextField *resultTextField;
- (IBAction)calc:(id)sender;
@end
