//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityCustomRotor.h>

@class NSOrderedSet;

@interface STAXCustomRotor : UIAccessibilityCustomRotor
{
    NSOrderedSet *_rotorItems;
}

+ (id)rotorWithName:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *rotorItems; // @synthesize rotorItems=_rotorItems;
- (id)description;
- (long long)indexOfRotorItem:(id)arg1;
- (id)rotorItemAfter:(id)arg1;
- (id)rotorItemBefore:(id)arg1;
- (id)initWithName:(id)arg1;

@end

