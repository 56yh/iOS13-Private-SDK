//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSMutableData (RFC2231Support)
- (void)mf_appendRFC2231CompliantValue:(id)arg1 forKey:(id)arg2;
- (void)mf_makeImmutable;
- (void)mf_convertNetworkLineEndingsToUnix;
- (void)mf_convertNetworkLineEndingsToUnixInRange:(struct _NSRange)arg1;
- (void)mf_appendCString:(const char *)arg1;
@end

