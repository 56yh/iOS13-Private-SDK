//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSDictionary, NSMutableSet, NSSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem
{
    CoreDAVLeafItem *_maxResourcesItem;
    CoreDAVLeafItem *_maxSizeItem;
    NSMutableSet *_supportedItems;
}

+ (id)copyParseRules;
@property(readonly, nonatomic) NSSet *supportedItems; // @synthesize supportedItems=_supportedItems;
@property(retain, nonatomic) CoreDAVLeafItem *maxSizeItem; // @synthesize maxSizeItem=_maxSizeItem;
@property(retain, nonatomic) CoreDAVLeafItem *maxResourcesItem; // @synthesize maxResourcesItem=_maxResourcesItem;
@property(readonly, nonatomic) _Bool supportsDelete;
@property(readonly, nonatomic) _Bool supportsUpdate;
@property(readonly, nonatomic) _Bool supportsInsert;
- (_Bool)supportsItemWithNameSpace:(id)arg1 name:(id)arg2;
@property(readonly, nonatomic) long long maxSize;
@property(readonly, nonatomic) long long maxResources;
@property(readonly, nonatomic) NSDictionary *dictRepresentation;
- (void)addSupportedItem:(id)arg1;
- (id)description;
- (id)init;

@end

