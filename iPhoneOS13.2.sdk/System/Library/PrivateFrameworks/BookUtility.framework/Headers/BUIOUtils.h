//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BUIOUtils : NSObject
{
}

+ (struct CGDataProvider *)newCGDataProviderForReadChannel:(id)arg1;
+ (struct CGDataProvider *)newCGDataProviderForInputStream:(id)arg1;
+ (void)readAllFromChannel:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end
