//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCPayBaseNetworkingError, WCPaySendBindCardAwardCgi, WCPaySendBindCardAwardCgiResponse;

@protocol WCPaySendBindCardAwardCgiDelegate <NSObject>
- (void)onWCPaySendBindCardAwardCgi:(WCPaySendBindCardAwardCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)onWCPaySendBindCardAwardCgi:(WCPaySendBindCardAwardCgi *)arg1 didGetResponse:(WCPaySendBindCardAwardCgiResponse *)arg2;
@end
