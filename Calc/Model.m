
#import "Model.h"

@implementation Model
@synthesize value1 = _value1;
@synthesize value2 = _value2;
@synthesize result = _result;

- (void)calc
{
    self.result = _value1 + _value2;
}

@end
