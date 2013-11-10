//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Amir Sadoughi on 11/9/13.
//  Copyright (c) 2013 Nayeli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject
@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating;


@end
