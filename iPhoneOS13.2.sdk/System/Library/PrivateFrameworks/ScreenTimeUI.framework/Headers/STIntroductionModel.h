//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, STAllowance, STDeviceBedtime;

__attribute__((visibility("hidden")))
@interface STIntroductionModel : NSObject
{
    _Bool _deviceForChild;
    STDeviceBedtime *_bedtime;
    STAllowance *_allowance;
    NSString *_parentalControlsPasscode;
}

@property(retain) NSString *parentalControlsPasscode; // @synthesize parentalControlsPasscode=_parentalControlsPasscode;
@property(retain) STAllowance *allowance; // @synthesize allowance=_allowance;
@property(retain) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
@property _Bool deviceForChild; // @synthesize deviceForChild=_deviceForChild;

@end

