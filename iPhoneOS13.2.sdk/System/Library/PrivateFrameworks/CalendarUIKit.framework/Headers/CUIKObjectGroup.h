//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDefaultDictionary, NSDictionary, NSMutableDictionary;

@interface CUIKObjectGroup : NSObject
{
    NSDictionary *_originalObjectMap;
    NSMutableDictionary *_objectMap;
    CalDefaultDictionary *_spawnedObjectIdentifiers;
}

@property(retain) CalDefaultDictionary *spawnedObjectIdentifiers; // @synthesize spawnedObjectIdentifiers=_spawnedObjectIdentifiers;
@property(retain) NSMutableDictionary *objectMap; // @synthesize objectMap=_objectMap;
@property(retain) NSDictionary *originalObjectMap; // @synthesize originalObjectMap=_originalObjectMap;

@end

