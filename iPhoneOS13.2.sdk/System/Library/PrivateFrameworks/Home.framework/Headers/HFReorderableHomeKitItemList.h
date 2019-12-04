//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSArray, NSString;
@protocol HMApplicationData;

@interface HFReorderableHomeKitItemList : NSObject <NSCopying, NSMutableCopying>
{
    id <HMApplicationData> _applicationDataContainer;
    NSString *_category;
    NSArray *_sortedHomeKitObjectIdentifiers;
}

+ (id)_dataForHomeKitItem:(id)arg1;
@property(copy, nonatomic) NSArray *sortedHomeKitObjectIdentifiers; // @synthesize sortedHomeKitObjectIdentifiers=_sortedHomeKitObjectIdentifiers;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) __weak id <HMApplicationData> applicationDataContainer; // @synthesize applicationDataContainer=_applicationDataContainer;
- (id /* block */)_actionSetTypeComparator;
- (id /* block */)_reorderableObjectDateAddedComparator;
- (id /* block */)_reorderableObjectTitleComparator;
- (id /* block */)_sortedHomeKitIdentifierComparator;
@property(readonly, nonatomic) NSString *_applicationDataKey;
- (id /* block */)_homeKitItemDataComparator;
@property(readonly, nonatomic) id /* block */ sortedHomeKitObjectComparator;
@property(readonly, nonatomic) id /* block */ sortedHomeKitItemComparator;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationDataContainer:(id)arg1 category:(id)arg2;
- (id)init;

@end
