//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class SALocalSearchMapItem;

@interface SALocalSearchAddItemToMapCache : SADomainCommand
{
}

+ (id)addItemToMapCacheWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addItemToMapCache;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SALocalSearchMapItem *mapItem;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

