//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/PARRequest.h>



@class NSURL;

@interface PARCardRequest : PARRequest <NSSecureCoding>
{
    NSURL *_cardURL;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSURL *cardURL; // @synthesize cardURL=_cardURL;
- (unsigned int)nwActivityLabel;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

