//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol TXRBuffer;

@protocol TXRBufferAllocator 
- (id <TXRBuffer>)newBufferWithLength:(unsigned long long)arg1;

@optional
- (id <TXRBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocNotification:(void (^)(void *, unsigned long long))arg3 error:(id *)arg4;
@end

