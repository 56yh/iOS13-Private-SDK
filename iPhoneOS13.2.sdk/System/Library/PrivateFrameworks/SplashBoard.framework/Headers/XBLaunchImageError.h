//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface XBLaunchImageError : NSError
{
    _Bool _fatal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, getter=isFatal) _Bool fatal; // @synthesize fatal=_fatal;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 fatal:(_Bool)arg4;

@end

