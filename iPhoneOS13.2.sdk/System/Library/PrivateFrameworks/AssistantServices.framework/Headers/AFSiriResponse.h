//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding>
{
    NSUUID *_requestIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_isForRequest:(id)arg1;
- (id)_initWithRequest:(id)arg1;
- (id)_initWithRequestIdentifier:(id)arg1;

@end

