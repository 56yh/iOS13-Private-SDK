//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding>
{
    _Bool _isFile;
    NSString *_type;
    NSString *_subtype;
    long long _count;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isFile; // @synthesize isFile=_isFile;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)incrementCount;
- (id)initWithType:(id)arg1 subtype:(id)arg2 isFile:(_Bool)arg3;
- (id)initWithType:(id)arg1 isFile:(_Bool)arg2;
- (id)init;

@end

