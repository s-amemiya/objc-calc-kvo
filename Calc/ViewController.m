
#import "ViewController.h"

@implementation ViewController
@synthesize value1TextField = _value1TextField;
@synthesize value2TextField = _value2TextField;
@synthesize resultTextField = _resultTextField;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        _model = [[Model alloc] init];
        [_model addObserver:self forKeyPath:@"result" options:NSKeyValueObservingOptionNew context:nil];
    }
    return self;
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context
{
    if (keyPath == @"result") {
        _resultTextField.text = [NSString stringWithFormat:@"%d", _model.result];
    }
}

- (void)calc:(id)sender
{
    _model.value1 = [_value1TextField.text intValue];
    _model.value2 = [_value2TextField.text intValue];
    [_model calc];
}

@end
