//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HUPresenceOptionSelectionConfirmationPrompt : NSObject
{
    _Bool _resetLocationToHomeOnConfirmation;
    NSString *_alertTitle;
    NSString *_alertBody;
}

@property(readonly, nonatomic) _Bool resetLocationToHomeOnConfirmation; // @synthesize resetLocationToHomeOnConfirmation=_resetLocationToHomeOnConfirmation;
@property(readonly, copy, nonatomic) NSString *alertBody; // @synthesize alertBody=_alertBody;
@property(readonly, copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
- (id)initWithAlertTitle:(id)arg1 alertBody:(id)arg2 resetLocationToHomeOnConfirmation:(_Bool)arg3;
- (id)init;

@end

