//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HeartRhythmUI/HRFeatureRegulatoryPanelDisplayable-Protocol.h>

@class NSAttributedString, NSString;
@protocol HRFeatureRegulatoryPanelDisplayUpdateDelegate;

@interface HRElectrocardiogramRegulatoryInstructionItem : NSObject <HRFeatureRegulatoryPanelDisplayable>
{
}

- (void)handleUserInteractionWithItemWithHostViewController:(id)arg1;
@property(readonly, nonatomic) long long cellAccessoryType;
@property(readonly, nonatomic) _Bool isInteractive;
@property(readonly, copy, nonatomic) NSAttributedString *valueString;
@property(readonly, copy, nonatomic) NSAttributedString *titleString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate;

@end

