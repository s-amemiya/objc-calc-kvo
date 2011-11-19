
#import <Foundation/Foundation.h>

@interface Model : NSObject
@property (nonatomic, readwrite) NSInteger value1;
@property (nonatomic, readwrite) NSInteger value2;
@property (nonatomic, readwrite) NSInteger result;
- (void)calc;
@end
