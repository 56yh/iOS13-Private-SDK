//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>





@class NSMapTable;

@interface MPUContentItemIdentifierCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSMapTable *_identifierTypeToIdentifier;
    unsigned long long _itemType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void)_setIdentifier:(id)arg1 forIdentifierType:(unsigned long long)arg2;
- (id)_copyWithZone:(struct _NSZone *)arg1 class:(Class)arg2;
- (id)identifierForIdentifierType:(unsigned long long)arg1;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)arg1;
@property(readonly, nonatomic) unsigned long long identifierCount;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithItemType:(unsigned long long)arg1;

@end

