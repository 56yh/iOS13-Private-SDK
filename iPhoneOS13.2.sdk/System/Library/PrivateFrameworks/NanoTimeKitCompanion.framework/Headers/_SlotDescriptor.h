//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface _SlotDescriptor : NSObject
{
    long long _family;
    NSArray *_typesRankedList;
    NSIndexSet *_possibleTypes;
}

+ (id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3;
@property(readonly, nonatomic) NSIndexSet *possibleTypes; // @synthesize possibleTypes=_possibleTypes;
@property(readonly, nonatomic) NSArray *typesRankedList; // @synthesize typesRankedList=_typesRankedList;
@property(readonly, nonatomic) long long family; // @synthesize family=_family;
- (_Bool)supportsType:(unsigned long long)arg1;
- (_Bool)allowsType:(unsigned long long)arg1 inFace:(id)arg2;

@end

