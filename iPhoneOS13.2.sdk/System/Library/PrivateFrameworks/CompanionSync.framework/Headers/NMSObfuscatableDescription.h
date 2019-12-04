//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NMSObfuscatableDescription : NSObject
{
    NSString *_prefixString;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *prefixString; // @synthesize prefixString=_prefixString;
- (id)CPSafeDescription;
- (id)description;
- (id)_descriptionObfuscated:(_Bool)arg1;
- (void)addObfuscatedDescriptionFormat:(id)arg1 value:(id)arg2;
- (void)addDescriptionFormat:(id)arg1 value:(id)arg2;
- (id)init;

@end

