//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSString, NSURL;

@interface SAUIImageResource : AceObject <SAAceSerializable>
{
}

+ (id)imageResourceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)imageResource;
@property(copy, nonatomic) NSString *userAgent;
@property(copy, nonatomic) NSString *urlFormatString;
@property(nonatomic) double scaleFactor;
@property(copy, nonatomic) NSURL *resourceUrl;
@property(nonatomic) double pointWidth;
@property(nonatomic) double pointHeight;
@property(nonatomic) double pixelWidth;
@property(nonatomic) double pixelHeight;
@property(copy, nonatomic) NSData *imageData;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

