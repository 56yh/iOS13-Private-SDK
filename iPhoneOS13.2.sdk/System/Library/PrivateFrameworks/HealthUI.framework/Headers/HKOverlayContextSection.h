//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDisplayTypeContextItemSection-Protocol.h>

@class NSArray, NSString;

@interface HKOverlayContextSection : NSObject <HKDisplayTypeContextItemSection>
{
    NSString *title;
    NSArray *items;
    NSString *_localizedSectionTitle;
    NSArray *_overlayContextItems;
}

@property(readonly, nonatomic) NSArray *overlayContextItems; // @synthesize overlayContextItems=_overlayContextItems;
@property(readonly, nonatomic) NSString *localizedSectionTitle; // @synthesize localizedSectionTitle=_localizedSectionTitle;
@property(retain, nonatomic) NSArray *items; // @synthesize items;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (id)initWithSectionTitle:(id)arg1 overlayContextItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

