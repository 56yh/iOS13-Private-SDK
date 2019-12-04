//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

__attribute__((visibility("hidden")))
@interface TSPDigest : NSObject <NSCopying>
{
    array_019f9a10 _digestData;
}

+ (id)digestFromDispatchData:(id)arg1;
+ (id)digestFromNSData:(id)arg1;
+ (id)digestWithDigestString:(id)arg1;
+ (id)emptyDataDigest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToProtobufString:(basic_string_23d93216 *)arg1;
- (id)initFromProtobufString:(const basic_string_23d93216 *)arg1;
@property(readonly, nonatomic) const array_019f9a10 *digestData;
- (id)initFromDispatchData:(id)arg1;
- (id)initFromNSData:(id)arg1;
- (id)initFromSHA1Context:(struct CC_SHA1state_st *)arg1;
- (id)initFromBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *digestString;
- (id)initWithDigestString:(id)arg1;
- (id)init;

@end

