//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFBase64Codec : NSObject
{
}

+ (id)decodeUuid:(id)arg1;
+ (id)decodeString:(id)arg1;
+ (id)encodeUuid:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (_Bool)decodeString:(id)arg1 with:(id /* block */)arg2;
+ (id)encodeBytes:(const void *)arg1 withLength:(unsigned long long)arg2;
+ (_Bool)checkTerminators:(long long)arg1 expected:(long long)arg2;
+ (_Bool)appendPadding;
+ (unsigned long long)encodedUuidLength;
+ (const char *)decoder;
+ (const char *)alphabet;
- (id)init;

@end
