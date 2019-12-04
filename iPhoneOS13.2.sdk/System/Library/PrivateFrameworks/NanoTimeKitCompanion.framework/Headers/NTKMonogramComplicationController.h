//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class NSString;
@protocol NTKMonogramComplicationDisplay;

@interface NTKMonogramComplicationController : NTKComplicationController <NTKTimeTravel>
{
    NSString *_monogramText;
}

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void)_handleMonogramTextReload;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_reloadMonogramText;
- (void)_updateDisplay;
- (_Bool)hasTapAction;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_activate;

// Remaining properties
@property(readonly, nonatomic) __weak id <NTKMonogramComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;

@end

