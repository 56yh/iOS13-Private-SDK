//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSCarPlayApplicationIcon-Protocol.h>

@class NSData, NSString;

@interface _SBSCarPlayApplicationInfo : NSObject <SBSCarPlayApplicationIcon>
{
    NSData *_iconImageData;
    double _iconImageScale;
    NSString *_localizedDisplayName;
}

@property(retain, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(nonatomic) double iconImageScale; // @synthesize iconImageScale=_iconImageScale;
@property(retain, nonatomic) NSData *iconImageData; // @synthesize iconImageData=_iconImageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

