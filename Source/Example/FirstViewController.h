////////////////////////////////////////////////////////////////////////////////
//
//  Jasper Blues
//  Copyright 2012 Jasper Blues
//  All Rights Reserved.
//
//  NOTICE: Jasper Blues permits you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <UIKit/UIKit.h>

@class SecondViewController;

typedef enum {
    LeftToRight = 0,
    RightToLeft,
} RotationDirection;

@interface FirstViewController : UIViewController {

@private
    CALayer* _rotateLayer;
}

@property(nonatomic, strong) SecondViewController* secondViewController;


- (IBAction) pushController:(id)sender;


@end