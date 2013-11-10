//
//  ScaryBugData.m
//  ScaryBugs
//
//  Created by Amir Sadoughi on 11/9/13.
//  Copyright (c) 2013 Nayeli. All rights reserved.
//

#import "ScaryBugData.h"

@implementation ScaryBugData

@synthesize title = _title;
@synthesize rating = _rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating {
    if ((self = [super init])) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}

@end
