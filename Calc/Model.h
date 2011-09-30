//
//  Model.h
//  Calc
//
//  Created by Shinya Amemiya on 9/30/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Model : NSObject {
    NSInteger _value1;
    NSInteger _value2;
    NSInteger _result;
}
@property (nonatomic, readwrite) NSInteger value1;
@property (nonatomic, readwrite) NSInteger value2;
@property (nonatomic, readwrite) NSInteger result;
- (void)calc;
@end
