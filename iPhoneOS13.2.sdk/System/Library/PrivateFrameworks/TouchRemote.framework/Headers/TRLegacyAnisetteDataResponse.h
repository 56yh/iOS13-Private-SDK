//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@class AKAnisetteData;

@interface TRLegacyAnisetteDataResponse : TRResponseMessage
{
    AKAnisetteData *_anisetteData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) AKAnisetteData *anisetteData; // @synthesize anisetteData=_anisetteData;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

