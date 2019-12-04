//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject
{
    NSMutableDictionary *_sectionHeaderViewLegibilityLabelDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary; // @synthesize sectionHeaderViewLegibilityLabelDictionary=_sectionHeaderViewLegibilityLabelDictionary;
- (id)_stringDescriptorForFont:(id)arg1;
- (id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2;
- (void)clearAll;
- (id)legibilityLabelForTitle:(id)arg1 forSuperview:(id)arg2 font:(id)arg3;
- (id)init;

@end

