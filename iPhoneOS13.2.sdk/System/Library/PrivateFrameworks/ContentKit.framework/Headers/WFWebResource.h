//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSData, NSString, NSURL;

@interface WFWebResource : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_data;
    NSURL *_URL;
    NSString *_MIMEType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

+ (_Bool)supportsSecureCoding;
+ (id)webResourceWithFile:(id)arg1;
+ (id)webResourceWithHTMLString:(id)arg1 baseURL:(id)arg2;
+ (id)webResourceWithURL:(id)arg1;
+ (id)webResourceWithData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
@property(readonly, nonatomic) NSString *frameName; // @synthesize frameName=_frameName;
@property(readonly, nonatomic) NSString *textEncodingName; // @synthesize textEncodingName=_textEncodingName;
@property(readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)loadInWKWebView:(id)arg1;

@end

