//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATSessionMessage.h>

@class NSError;

@interface CATSessionMessageDidInvalidate : CATSessionMessage
{
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;

@end

